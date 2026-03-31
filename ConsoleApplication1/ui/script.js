const translations = {
    vi: {
        page_title: "Quản Lý Bệnh Viện", app_logo: "Quản Lý <span>nhân sự</span>",
        nav_dashboard: "Bảng điều khiển", nav_staff: "Nhân viên Y tế", nav_queue: "Quản lý Xếp hàng",
        nav_finance: "Tài chính & Viện phí", nav_pharmacy: "Quản lý Kho Dược", nav_crm: "Chăm sóc Khách hàng",
        user_role: "Quản trị viên", search_placeholder: "Tìm kiếm nhanh...",
        dash_title: "Tổng Quan Bệnh Viện", dash_sub: "Chào mừng trở lại! Dưới đây là tình trạng hoạt động hôm nay.",
        stat_bhyt_title: "Xếp hàng BHYT", stat_srv_title: "Xếp hàng Dịch Vụ", stat_staff_title: "Tổng Nhân Viên", stat_inv_title: "Cảnh Báo Kho",
        hero_title: "Quản lý chuyên nghiệp & thân thiện", hero_sub: "Hệ thống hỗ trợ đa ngôn ngữ, vận hành trên công nghệ Web tiên tiến.", hero_btn: "Quản Lý Nhân Viên",
        staff_title: "Nhân viên Y tế", staff_add_btn: "Thêm Nhân Viên",
        th_id: "Mã NV", th_name: "Họ & Tên", th_job: "Nghề nghiệp", th_dept: "Phòng / Khoa", th_salary: "Lương (VNĐ)", th_kpi: "KPI", th_action: "Hành động",
        queue_title: "Quản lý Xếp Hàng", queue_sub: "Cấp số thứ tự khám cho bệnh nhân tới hệ thống.",
        q_srv_title: "Khám Dịch Vụ", q_srv_btn: "Cấp Số Mới (1001+)", q_bhyt_title: "Khám Bảo Hiểm (BHYT)", q_bhyt_btn: "Cấp Số Mới (0001+)",
        fin_title: "Tài Chính & Viện Phí", fin_sub: "Tính toán hóa đơn khám chữa bệnh linh hoạt.",
        fin_fee_lbl: "Phí Khám Bệnh (VNĐ)", fin_fee_ph: "Ví dụ: 500000", fin_ins_lbl: "Bệnh nhân có sử dụng thẻ BHYT? (Giảm 80%)",
        fin_base: "Phí Gốc", fin_disc: "BHYT Chi Trả (-80%)", fin_total: "TỔNG THANH TOÁN",
        phar_title: "Quản lý Kho Dược", phar_add_btn: "Nhập Thuốc",
        th_med: "Tên Thuốc", th_stock: "Tồn Kho", th_exp: "Hạn Sử Dụng (HSD)", th_status: "Tình Trạng",
        crm_title: "Chăm sóc Khách hàng (CRM)", crm_sub: "Hệ thống tự động đồng bộ gửi tin nhắn SMS.",
        crm_scan_title: "Quét Sinh Nhật Tự Động", crm_scan_desc: "Hệ thống sẽ đối chiếu hồ sơ để tìm bệnh nhân có sinh nhật vào hôm nay:", crm_scan_btn: "Tiến hành Quét",
        m_staff_title: "Thêm Nhân Viên Y Tế", m_staff_id: "Mã Nhân Viên (ID)", m_staff_id_ph: "ID (dạng số)",
        m_staff_name: "Họ & Tên", m_staff_name_ph: "Ví dụ: Nguyễn Văn A", m_staff_dept: "Khoa / Chuyên Ngành", m_staff_dept_ph: "Nội Khoa, Ngoại Khoa...",
        m_staff_job: "Chức danh / Nghề nghiệp", m_staff_job_ph: "Bác sĩ, Y tá...", m_staff_sal: "Lương Cơ Bản", m_staff_kpi: "Chỉ tiêu KPI (1-100)", m_staff_save: "Lưu Thông Tin",
        m_inv_title: "Nhập Thêm Thuốc", m_inv_name: "Tên Thuốc / Vật Tư", m_inv_qty: "Số Lượng Nhập", m_inv_exp: "Hạn Sử Dụng", m_inv_save: "Thêm Vào Kho",
        // New Modals Edit & Dispense
        m_esta_title: "Chỉnh Sửa Nhân Viên", m_esta_save: "Cập Nhật Thông Tin",
        m_disp_title: "Xuất Kho Thuốc", m_disp_name: "Tên Thuốc (Đang Xuất)", m_disp_qty: "Số Lượng Lấy Ra", m_disp_save: "Xác Nhận Xuất",
        // Dynamic Strings
        dyn_ticket: "Số #", dyn_active: "Đang làm việc", dyn_warns: "Cảnh báo",
        dyn_no_staff: "Chưa có hồ sơ nhân viên y tế nào.", dyn_currency: "VNĐ",
        dyn_stat_low: "Sắp Hết Cũ", dyn_stat_ok: "Kho Tốt", dyn_stat_exp: "QUÁ HẠN!", dyn_stat_soon: "Sắp Hết Hạn", dyn_stat_long: "HSD Dài",
        dyn_units: "hộp/vỉ", dyn_scan_wait: "Hệ thống đang rà soát dữ liệu sinh nhật bệnh nhân...",
        dyn_sms_sent: "Đã Gửi SMS chúc mừng tới:", dyn_no_bday: "Không phát hiện sinh nhật bệnh nhân nào vào hôm nay.",
        dyn_err_fill: "Vui lòng điền đầy đủ mọi thông tin!", dyn_err_id: "Lỗi: ID Nhân viên đã tồn tại!", dyn_del_conf: "Bạn có chắc chắn muốn xóa hồ sơ này không?",
        dyn_err_inv: "Thông tin không hợp lệ, vui lòng kiểm tra lại!",
        dyn_err_qty: "Số lượng không hợp lệ hoặc vượt quá phần còn lại trong Tồn kho!", dyn_disp_succ: "Đã xuất kho thành công!"
    },
    en: {
        page_title: "Hospital Manager", app_logo: "Manage <span>medical staff</span>",
        nav_dashboard: "Dashboard", nav_staff: "Medical Staff", nav_queue: "Queue Management",
        nav_finance: "Finance & Billing", nav_pharmacy: "Pharmacy Inventory", nav_crm: "Customer CRM",
        user_role: "Administrator", search_placeholder: "Search anything...",
        dash_title: "Hospital Overview", dash_sub: "Welcome back! Here is today's hospital status.",
        stat_bhyt_title: "Insurance Queue", stat_srv_title: "Service Queue", stat_staff_title: "Total Staff", stat_inv_title: "Inventory Alerts",
        hero_title: "Professional & Modern Management", hero_sub: "Fully multi-lingual robust system built on modern web technologies.", hero_btn: "Manage Staff",
        staff_title: "Medical Staff", staff_add_btn: "Add Staff",
        th_id: "ID", th_name: "Full Name", th_job: "Job Title", th_dept: "Department", th_salary: "Salary", th_kpi: "KPI", th_action: "Actions",
        queue_title: "Queue Management", queue_sub: "Issue queue tickets for arriving patients.",
        q_srv_title: "Service Exam", q_srv_btn: "Issue New (1001+)", q_bhyt_title: "Insurance (BHYT)", q_bhyt_btn: "Issue New (0001+)",
        fin_title: "Finance & Billing", fin_sub: "Calculate patient examination bills dynamically.",
        fin_fee_lbl: "Examination Fee", fin_fee_ph: "e.g. 500000", fin_ins_lbl: "Patient has Health Insurance? (80% Off)",
        fin_base: "Base Fee", fin_disc: "Insurance Coverage (-80%)", fin_total: "TOTAL PAYABLE",
        phar_title: "Pharmacy Inventory", phar_add_btn: "Restock Medicine",
        th_med: "Medicine", th_stock: "Stock Qty", th_exp: "Expiry Date", th_status: "Status",
        crm_title: "Customer Care (CRM)", crm_sub: "Automated synchronization to send patient SMS.",
        crm_scan_title: "Auto Birthday Scanner", crm_scan_desc: "Scan the database for patients whose birthday matches today:", crm_scan_btn: "Start Scan",
        m_staff_title: "Add Medical Staff", m_staff_id: "Staff ID", m_staff_id_ph: "Unique numeric ID",
        m_staff_name: "Full Name", m_staff_name_ph: "e.g. John Doe", m_staff_dept: "Department", m_staff_dept_ph: "Cardiology, Surgery...",
        m_staff_job: "Job Title", m_staff_job_ph: "Doctor, Nurse...", m_staff_sal: "Base Salary", m_staff_kpi: "KPI Target (1-100)", m_staff_save: "Save Record",
        m_inv_title: "Restock Medicine", m_inv_name: "Medicine Name", m_inv_qty: "Stock Quantity", m_inv_exp: "Expiry Date", m_inv_save: "Add to Inventory",
        // New Modals Edit & Dispense
        m_esta_title: "Edit Medical Staff", m_esta_save: "Update Record",
        m_disp_title: "Dispense Medicine", m_disp_name: "Medicine Output", m_disp_qty: "Quantity to Dispense", m_disp_save: "Confirm Dispense",
        // Dynamic Strings
        dyn_ticket: "Ticket #", dyn_active: "Active", dyn_warns: "Warnings",
        dyn_no_staff: "No medical staff records found.", dyn_currency: "VND",
        dyn_stat_low: "Low Stock", dyn_stat_ok: "Stock OK", dyn_stat_exp: "EXPIRED!", dyn_stat_soon: "Expiring Soon", dyn_stat_long: "Good Expiry",
        dyn_units: "units", dyn_scan_wait: "Scanning database for patient birthdays...",
        dyn_sms_sent: "Sent Happy Birthday SMS to:", dyn_no_bday: "No patient birthdays found today.",
        dyn_err_fill: "Please complete all fields!", dyn_err_id: "Error: Staff ID already exists!", dyn_del_conf: "Are you sure you want to delete this record?",
        dyn_err_inv: "Invalid input, please check your fields!",
        dyn_err_qty: "Invalid quantity or exceeds current stock!", dyn_disp_succ: "Successfully dispensed!"
    }
};

let currentLang = 'vi';

function setLanguage(lang) {
    currentLang = lang;
    document.documentElement.lang = lang;
    
    document.querySelectorAll('.lang-btn').forEach(b => b.classList.remove('active'));
    document.getElementById(`btn-${lang}`).classList.add('active');

    const elements = document.querySelectorAll('[data-i18n]');
    elements.forEach(el => {
        const key = el.getAttribute('data-i18n');
        if(translations[lang][key]) el.innerHTML = translations[lang][key]; 
    });

    const placeholders = document.querySelectorAll('[data-i18n-placeholder]');
    placeholders.forEach(el => {
        const key = el.getAttribute('data-i18n-placeholder');
        if(translations[lang][key]) el.placeholder = translations[lang][key];
    });

    updateDashboardStats();
    renderStaffTable();
    renderPharmacyTable();
    initFinanceModule(); 
}

function t(key) { return translations[currentLang][key] || key; }

// --- Global State & Seed Data ---
const state = {
    systemDate: { day: 30, month: 3, year: 2026 },
    qBHYT: 0,
    qSRV: 1000,
    staff: [],
    inventory: [
        { name: "Paracetamol", stock: 10, expDate: { day: 15, month: 4, year: 2026 } },
        { name: "Amoxicillin", stock: 50, expDate: { day: 30, month: 4, year: 2026 } },
        { name: "Vitamin C", stock: 5, expDate: { day: 10, month: 10, year: 2026 } },
        { name: "Thuốc Sốt X", stock: 100, expDate: { day: 20, month: 12, year: 2026 } }
    ],
    patients: [
        { name: "Nguyễn Văn A", dob: { day: 30, month: 3, year: 1990 } },
        { name: "Lê Thị Bảo", dob: { day: 15, month: 6, year: 1985 } }
    ]
};

// --- Initialization ---
document.addEventListener('DOMContentLoaded', () => {
    initNavigation();
    initSystemDate();
    initStaffModule();
    initQueueModule();
    initFinanceModule();
    initPharmacyModule();
    initCRMModule();
    setLanguage(currentLang);
});

// --- Navigation Logic ---
function initNavigation() {
    const navLinks = document.querySelectorAll('.nav-links li');
    const sections = document.querySelectorAll('.page-section');
    navLinks.forEach(link => {
        link.addEventListener('click', () => {
            navLinks.forEach(n => n.classList.remove('active'));
            link.classList.add('active');
            const targetId = link.getAttribute('data-target');
            sections.forEach(s => s.classList.remove('active'));
            document.getElementById(targetId).classList.add('active');
        });
    });
}

function initSystemDate() {
    const d = state.systemDate;
    const dateStr = `${String(d.day).padStart(2, '0')}/${String(d.month).padStart(2, '0')}/${d.year}`;
    document.getElementById('system-date').textContent = dateStr;
    document.getElementById('crm-date-display').textContent = dateStr;
}

function updateDashboardStats() {
    document.getElementById('stat-bhyt').textContent = `${t('dyn_ticket')}${String(state.qBHYT).padStart(4, '0')}`;
    document.getElementById('stat-srv').textContent = `${t('dyn_ticket')}${state.qSRV}`;
    document.getElementById('stat-staff').textContent = `${state.staff.length} ${t('dyn_active')}`;
    const warnings = state.inventory.filter(med => med.stock < 15 || calculateDaysExp(med.expDate) <= 30).length;
    document.getElementById('stat-inventory').textContent = `${warnings} ${t('dyn_warns')}`;
}

// --- Modals Logic ---
function openModal(id) { document.getElementById(id).classList.add('active'); }
function closeModal(id) {
    document.getElementById(id).classList.remove('active');
    const inputs = document.getElementById(id).querySelectorAll('input');
    inputs.forEach(i => { if(i.type === 'checkbox') i.checked = false; else i.value = ''; });
}
document.querySelectorAll('.close-modal').forEach(btn => {
    btn.addEventListener('click', (e) => e.target.closest('.modal-overlay').classList.remove('active'));
});

// --- MODULE 1: Medical Staff ---
function initStaffModule() {
    // Add Staff
    document.getElementById('btn-add-staff').addEventListener('click', () => openModal('staff-modal'));
    document.getElementById('btn-save-staff').addEventListener('click', () => {
        const id = parseInt(document.getElementById('staff-id').value);
        const name = document.getElementById('staff-name').value;
        const job = document.getElementById('staff-job').value;
        const dept = document.getElementById('staff-dept').value;
        const salary = parseFloat(document.getElementById('staff-salary').value);
        const kpi = parseInt(document.getElementById('staff-kpi').value);

        if(!id || !name || !job || !dept || !salary || !kpi) { alert(t('dyn_err_fill')); return; }
        if(state.staff.some(s => s.id === id)) { alert(t('dyn_err_id')); return; }

        state.staff.push({ id, name, job, dept, salary, kpi });
        closeModal('staff-modal'); renderStaffTable(); updateDashboardStats();
    });

    // Update Staff (Edit)
    document.getElementById('btn-update-staff').addEventListener('click', () => {
        const idx = document.getElementById('edit-staff-index').value;
        const salary = parseFloat(document.getElementById('edit-staff-salary').value);
        const kpi = parseInt(document.getElementById('edit-staff-kpi').value);
        
        if(!salary || !kpi) { alert(t('dyn_err_fill')); return; }
        
        state.staff[idx].salary = salary;
        state.staff[idx].kpi = kpi;

        closeModal('edit-staff-modal'); renderStaffTable();
    });
}

window.editStaff = (idx) => {
    const s = state.staff[idx];
    document.getElementById('edit-staff-id').value = s.id;
    document.getElementById('edit-staff-name').value = s.name;
    document.getElementById('edit-staff-job').value = s.job || '';
    document.getElementById('edit-staff-dept').value = s.dept;
    document.getElementById('edit-staff-salary').value = s.salary;
    document.getElementById('edit-staff-kpi').value = s.kpi;
    document.getElementById('edit-staff-index').value = idx;
    openModal('edit-staff-modal');
}

window.deleteStaff = (idx) => {
    if(confirm(t('dyn_del_conf'))) {
        state.staff.splice(idx, 1);
        renderStaffTable(); updateDashboardStats();
    }
}

function renderStaffTable() {
    const tbody = document.getElementById('staff-table-body');
    tbody.innerHTML = '';
    if(state.staff.length === 0) {
        tbody.innerHTML = `<tr><td colspan="7" style="text-align:center; color: var(--text-muted)">${t('dyn_no_staff')}</td></tr>`;
        return;
    }
    state.staff.forEach((s, idx) => {
        const tr = document.createElement('tr');
        tr.innerHTML = `
            <td>#${s.id}</td>
            <td style="font-weight:600; color:white;">${s.name}</td>
            <td style="color:var(--text-muted);">${s.job || ''}</td>
            <td><span class="status safe">${s.dept}</span></td>
            <td>${s.salary.toLocaleString('vi-VN')} ${t('dyn_currency')}</td>
            <td>${s.kpi}/100</td>
            <td>
                <button class="action-icon" style="color:var(--primary); margin-right:5px;" onclick="editStaff(${idx})"><i class="fa-solid fa-pen"></i></button>
                <button class="action-icon" onclick="deleteStaff(${idx})"><i class="fa-solid fa-trash"></i></button>
            </td>
        `;
        tbody.appendChild(tr);
    });
}

// --- MODULE 2: Queue ---
function initQueueModule() {
    const uiBHYT = document.getElementById('current-bhyt');
    const uiSRV = document.getElementById('current-srv');
    document.getElementById('btn-issue-bhyt').addEventListener('click', () => {
        state.qBHYT++; uiBHYT.textContent = String(state.qBHYT).padStart(4, '0');
        animateValue(uiBHYT); updateDashboardStats();
    });
    document.getElementById('btn-issue-srv').addEventListener('click', () => {
        state.qSRV++; uiSRV.textContent = state.qSRV;
        animateValue(uiSRV); updateDashboardStats();
    });
}

// --- MODULE 3: Finance ---
function initFinanceModule() {
    const feeInput = document.getElementById('fee-input');
    const toggle = document.getElementById('insurance-toggle');
    const lBase = document.getElementById('bill-base');
    const lDiscount = document.getElementById('bill-discount');
    const lTotal = document.getElementById('bill-total');

    window.updateBill = () => {
        const fee = parseFloat(feeInput.value) || 0;
        const discount = toggle.checked ? (fee * 0.8) : 0;
        lBase.textContent = `${fee.toLocaleString('vi-VN')} ${t('dyn_currency')}`;
        lDiscount.textContent = `- ${discount.toLocaleString('vi-VN')} ${t('dyn_currency')}`;
        lTotal.textContent = `${(fee - discount).toLocaleString('vi-VN')} ${t('dyn_currency')}`;
    };
    feeInput.addEventListener('input', updateBill);
    toggle.addEventListener('change', updateBill); updateBill();
}

// --- MODULE 4: Pharmacy ---
function initPharmacyModule() {
    document.getElementById('btn-add-med').addEventListener('click', () => openModal('med-modal'));
    document.getElementById('btn-save-med').addEventListener('click', () => {
        const name = document.getElementById('med-name').value;
        const stock = parseInt(document.getElementById('med-stock').value) || 0;
        const dtStr = document.getElementById('med-exp').value;
        
        if(!name || stock < 0 || !dtStr) { alert(t('dyn_err_inv')); return; }

        const parts = dtStr.split('-');
        const expDate = { year: parseInt(parts[0]), month: parseInt(parts[1]), day: parseInt(parts[2]) };
        const existing = state.inventory.find(m => m.name.toLowerCase() === name.toLowerCase() && m.expDate.year === expDate.year && m.expDate.month === expDate.month && m.expDate.day === expDate.day);
        
        if(existing) existing.stock += stock;
        else state.inventory.push({ name, stock, expDate });
        
        closeModal('med-modal'); renderPharmacyTable(); updateDashboardStats();
    });

    // Dispense Med
    document.getElementById('btn-dispense-med').addEventListener('click', () => {
        const idx = document.getElementById('disp-med-index').value;
        const qty = parseInt(document.getElementById('disp-med-qty').value);
        
        if(!qty || qty <= 0 || qty > state.inventory[idx].stock) { alert(t('dyn_err_qty')); return; }
        
        state.inventory[idx].stock -= qty;
        alert(t('dyn_disp_succ'));
        closeModal('dispense-med-modal'); 
        renderPharmacyTable(); 
        updateDashboardStats();
    });
}

function calculateDaysExp(expDate) {
    const d1 = new Date(state.systemDate.year, state.systemDate.month - 1, state.systemDate.day);
    const d2 = new Date(expDate.year, expDate.month - 1, expDate.day);
    return Math.floor((d2 - d1) / (1000 * 60 * 60 * 24));
}

window.dispenseMed = (idx) => {
    document.getElementById('disp-med-name').value = state.inventory[idx].name;
    document.getElementById('disp-med-index').value = idx;
    openModal('dispense-med-modal');
}

function renderPharmacyTable() {
    const tbody = document.getElementById('pharmacy-table-body');
    tbody.innerHTML = '';
    state.inventory.forEach((m, idx) => {
        const ds = calculateDaysExp(m.expDate);
        let statHTML = "";
        
        if (m.stock < 15) statHTML += `<span class="status danger">${t('dyn_stat_low')}</span> `;
        else statHTML += `<span class="status safe">${t('dyn_stat_ok')}</span> `;

        if (ds < 0) statHTML += `<span class="status danger">${t('dyn_stat_exp')}</span>`;
        else if (ds <= 30) statHTML += `<span class="status warn">${t('dyn_stat_soon')}</span>`;
        else statHTML += `<span class="status safe">${t('dyn_stat_long')}</span>`;

        const tr = document.createElement('tr');
        tr.innerHTML = `
            <td style="font-weight:600; color:white;">${m.name}</td>
            <td>${m.stock} ${t('dyn_units')}</td>
            <td>${String(m.expDate.day).padStart(2,'0')}/${String(m.expDate.month).padStart(2,'0')}/${m.expDate.year}</td>
            <td>${statHTML}</td>
            <td><button class="action-icon" style="color:var(--accent-yellow);" onclick="dispenseMed(${idx})" title="Dispense/Xuất Kho"><i class="fa-solid fa-box-open"></i></button></td>
        `;
        tbody.appendChild(tr);
    });
}

// --- MODULE 5: CRM ---
function initCRMModule() {
    document.getElementById('btn-scan-crm').addEventListener('click', () => {
        const resDiv = document.getElementById('crm-results');
        resDiv.classList.remove('hidden');
        resDiv.innerHTML = `<p style="color:var(--text-muted)">${t('dyn_scan_wait')}</p>`;
        setTimeout(() => {
            const matches = state.patients.filter(p => p.dob.day === state.systemDate.day && p.dob.month === state.systemDate.month);
            if(matches.length > 0) {
                let html = '<ul style="list-style:none; padding:10px 0;">';
                matches.forEach(m => { html += `<li style="margin-bottom:8px; color:var(--accent-green); font-size:1.1rem;"><i class="fa-solid fa-cake-candles"></i> ${t('dyn_sms_sent')} <strong>${m.name}</strong></li>`; });
                html += '</ul>';
                resDiv.innerHTML = html;
            } else { resDiv.innerHTML = `<p style="color:var(--accent-red)">${t('dyn_no_bday')}</p>`; }
        }, 1500);
    });
}

function animateValue(obj) {
    obj.style.transform = 'scale(1.3)'; obj.style.color = 'var(--primary)';
    setTimeout(() => { obj.style.transform = 'scale(1)'; obj.style.color = 'white'; }, 200);
}
